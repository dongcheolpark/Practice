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
        public Vector2 Velocity;
        public Vector2 Accurate;
        public Vector2 Power;
        public float Speed;
        public string name;

        public float AcX = 0, AcY = 0;

        public Gravity gr = new Gravity();

    }
}
