using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using System;
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
        GObject ball3 = new GObject();

        private GraphicsDeviceManager graphics;
        private SpriteBatch _spriteBatch;
        private int WindowHeight;

        public Game1() //생성자
        {
            graphics = new GraphicsDeviceManager(this);
            Content.RootDirectory = "Content";
            IsMouseVisible = true;
        }

        protected override void Initialize()
        {
            graphics.PreferredBackBufferWidth = 1280;
            graphics.PreferredBackBufferHeight = 720;
            WindowHeight = graphics.PreferredBackBufferHeight;
            graphics.ApplyChanges();

            ball.Position = new Vector2(100,0);
            ball.Speed = 100f;
            ball.name = "firstball";

            ball2.Position = new Vector2(200, 100);
            ball2.Speed = 100f;
            ball2.name = "Secondball";

            ball3.Position = new Vector2(300, 200);
            ball3.Speed = 100f;
            ball3.name = "thirdball";


            Func = new Function(WindowHeight);
            Func.ObjectAdd(ball);
            Func.ObjectAdd(ball2);
            Func.ObjectAdd(ball3);

            base.Initialize();
        }

        protected override void LoadContent()
        {
            _spriteBatch = new SpriteBatch(GraphicsDevice);
            ball.Texture = Content.Load<Texture2D>("ball");// ball texture load
            ball2.Texture = Content.Load<Texture2D>("ball");// ball texture load
            ball3.Texture = Content.Load<Texture2D>("ball");// ball texture load
        }

        protected override void Update(GameTime gameTime)
        {
            if (Keyboard.GetState().IsKeyDown(Keys.Escape)) Exit();
            if (Keyboard.GetState().IsKeyDown(Keys.F5))
            {
                Func.GObjects[0].Position = new Vector2(100, 0);
                Func.GObjects[1].Position = new Vector2(200, 100);
                Func.GObjects[2].Position = new Vector2(300, 200);
            }

            var kstate = Keyboard.GetState();

            Func.ObjectGravity(ref gameTime);

            base.Update(gameTime);
        }

        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(BackgroundColor);

            Func.ObjectDraw(ref _spriteBatch);

            // TODO: Add your drawing code here

            base.Draw(gameTime);
        }
    }
}



