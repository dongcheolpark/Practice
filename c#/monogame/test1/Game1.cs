using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using System.Diagnostics;
using test1.func;
using test1.model;

namespace test1
{
    public class Game1 : Game
    {
        Color BackgroundColor = Color.CornflowerBlue;

        Function Func;

        GObject ball = new GObject();
        GObject ball2 = new GObject();

        private GraphicsDeviceManager _graphics;
        private SpriteBatch _spriteBatch;
        private int WindowHeight;

        public Game1() //생성자
        {
            _graphics = new GraphicsDeviceManager(this);
            Content.RootDirectory = "Content";
            IsMouseVisible = true;
        }

        protected override void Initialize()//초기설정
        {
            WindowHeight = _graphics.PreferredBackBufferHeight;

            ball.Position = new Vector2(40,0);
            ball.Speed = 100f;
            ball.name = "firstball";

            ball2.Position = new Vector2(200, 0);
            ball2.Speed = 100f;
            ball2.name = "Secondball";


            Func = new Function(WindowHeight);
            Func.ObjectAdd(ball);
            Func.ObjectAdd(ball2);

            base.Initialize();
        }

        protected override void LoadContent()//콘텐츠 불러오기
        {
            _spriteBatch = new SpriteBatch(GraphicsDevice);
            ball.Texture = Content.Load<Texture2D>("ball");// ball texture load
            ball2.Texture = Content.Load<Texture2D>("ball");// ball texture load
        }

        protected override void Update(GameTime gameTime)//업데이트
        {
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed || Keyboard.GetState().IsKeyDown(Keys.Escape))
                Exit();

            var kstate = Keyboard.GetState();

            Func.ObjectGravity(ref gameTime);

            base.Update(gameTime);
        }

        protected override void Draw(GameTime gameTime)//그리기
        {
            GraphicsDevice.Clear(BackgroundColor);

            Func.ObjectDraw(ref _spriteBatch);

            // TODO: Add your drawing code here

            base.Draw(gameTime);
        }
    }
}


