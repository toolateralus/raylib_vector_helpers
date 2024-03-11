#include "raylib.h"
#include <cmath>

static constexpr Vector2 Vector2Subtract(const Vector2 &v1, const Vector2 &v2) {
  return {v1.x - v2.x, v1.y - v2.y};
}
static constexpr Vector2 Vector2Multiply(const Vector2 &v1, const float &scalar) {
  return {v1.x * scalar, v1.y * scalar};
}
static constexpr Vector2 Vector2Multiply(const Vector2 &v1, const Vector2 &v2) {
  return {v1.x * v2.x, v1.y * v2.y};
}
static constexpr Vector2 Vector2Divide(const Vector2 &v1, const float &scalar) {
  return {v1.x / scalar, v1.y / scalar};
}
static constexpr Vector2 Vector2Divide(const Vector2 &v1, const Vector2 &v2) {
  return {v1.x / v2.x, v1.y / v2.y};
}
static constexpr float Vector2DotProduct(const Vector2 &v1, const Vector2 &v2) {
  return v1.x * v2.x + v1.y * v2.y;
}
static constexpr Vector2 Vector2Scale(const Vector2 &v, const float &scale) {
  return {v.x * scale, v.y * scale};
}
static constexpr Vector2 Vector2Normalize(const Vector2 &v) {
  float length = sqrt(v.x * v.x + v.y * v.y);
  return {v.x / length, v.y / length};
}
static constexpr float Vector2Length(const Vector2 &v) {
  return sqrt(v.x * v.x + v.y * v.y);
}
static constexpr float Vector2CrossProduct(const Vector2 &v1, const Vector2 &v2) {
  return v1.x * v2.y - v1.y * v2.x;
}
static constexpr float Vector2Distance(const Vector2 &v1, const Vector2 &v2) {
  return sqrt(pow(v2.x - v1.x, 2) + pow(v2.y - v1.y, 2));
}
static constexpr float Vector2Angle(const Vector2 &v1, const Vector2 &v2) {
  return atan2(Vector2CrossProduct(v1, v2), Vector2DotProduct(v1, v2));
}
static constexpr Vector2 Vector2Perpendicular(const Vector2 &v) {
  return {-v.y, v.x};
}
static constexpr Vector2 Vector2Reflect(const Vector2 &v, const Vector2 &normal) {
  return Vector2Subtract(v, Vector2Scale(normal, 2 * Vector2DotProduct(v, normal)));
}
static constexpr Vector2 Vector2Add(const Vector2 &v1, const Vector2 &v2) {
  return {v1.x + v2.x, v1.y + v2.y};
}
static constexpr float pixelsToMeters(const float& px) {
  return px / 100.0f;
}
static constexpr float metersToPixels(const float& m) {
  return m * 100.0f;
}
static constexpr Vector2 pixelsToMeters(const Vector2& px) {
  return {px.x / 100.0f, px.y / 100.0f};
}
static constexpr Vector2 metersToPixels(const Vector2& m) {
  return {m.x * 100.0f, m.y * 100.0f};
}
