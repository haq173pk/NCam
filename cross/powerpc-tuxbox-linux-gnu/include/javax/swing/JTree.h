// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JTree__
#define __javax_swing_JTree__

#pragma interface

#include <javax/swing/JComponent.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JTree;
      namespace plaf
      {
        class TreeUI;
      }
    }
  }
}

class javax::swing::JTree : public ::javax::swing::JComponent
{
public: // actually package-private
  JTree ();
public:
  virtual ::javax::swing::plaf::TreeUI *getUI ();
  virtual void setUI (::javax::swing::plaf::TreeUI *);
  virtual void updateUI ();
  virtual ::java::lang::String *getUIClassID ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext () { return 0; }
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize () { return 0; }
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jboolean getScrollableTracksViewportWidth ();
  virtual jboolean getScrollableTracksViewportHeight ();

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JTree__ */