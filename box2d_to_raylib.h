#include <box2d/b2_math.h>
#include <raylib.h>

static constexpr Vector2 fromb2Vec2(const b2Vec2& v) {
  return {v.x, v.y};
}
static b2Vec2 tob2Vec2(const Vector2& v) {
  return {v.x, v.y};
}