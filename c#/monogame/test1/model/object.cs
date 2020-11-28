using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using System.Diagnostics;
using test1.func;

namespace test1.model
{
    public class GObject
    {
        public Texture2D Texture;
        public Vector2 Position;
        public float Speed;
        public string name;

        public Gravity gr = new Gravity();

    }
}
