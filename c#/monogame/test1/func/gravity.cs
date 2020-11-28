using Microsoft.Xna.Framework;
using System;
using System.Collections.Generic;
using System.Text;

namespace test1.func
{
    public class Gravity
    {
        private int GravityAcs = 10;
        private bool isstart;
        private TimeSpan start;
        private double TGravity(double time)// v=gt
        {
            return GravityAcs * time;
        }

        public bool IsStart()
        {
            return (isstart == true) ? true : false;
        }

        public void End() { isstart = false; }
        public void Drop(ref float objectY, ref GameTime gametime)// gravity
        {
            if (isstart == false) {
                isstart = true;
                start = gametime.TotalGameTime; 
            }
            objectY += (float)TGravity(gametime.TotalGameTime.TotalSeconds - start.TotalSeconds);
        }
    }
}
