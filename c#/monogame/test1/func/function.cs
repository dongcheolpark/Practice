using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using System.Collections.Generic;
using System.Diagnostics;
using test1.func;
using test1.model;

namespace test1.func
{
    public class Function
    {
        private List<GObject> GObjects = new List<GObject>();
        private int WindowHeight;

        public Function(int w)
        {
            WindowHeight = w;
        }
        public void ObjectAdd(GObject a)
        {
            GObjects.Add(a);
        }

        public void ObjectGravity(ref GameTime gameTime)
        {
            foreach(var item in GObjects)
            {
                if ((item.Position.Y + item.Texture.Height / 2) <= WindowHeight)
                {
                    item.gr.Drop(ref item.Position.Y, ref gameTime);
                }
                else item.gr.End();
            }
        }

        public void ObjectDraw(ref SpriteBatch _spriteBatch)
        {
            foreach(var item in GObjects)
            {
                _spriteBatch.Begin();
                _spriteBatch.Draw(item.Texture, item.Position, null, Color.White, 0f, new Vector2(item.Texture.Width / 2, item.Texture.Height / 2),
                    Vector2.One, SpriteEffects.None, 0f);
                _spriteBatch.End();
            }
        }
    }
}
