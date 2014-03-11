/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLContext, VGLFragmentShader, VGLResource, VGLVertexShader;

@interface VGLProgram : NSObject <NSCopying> {
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    struct vector<UniformHandle, vk_allocator<UniformHandle> > { 
        struct UniformHandle {} *__begin_; 
        struct UniformHandle {} *__end_; 
        struct __compressed_pair<UniformHandle *, vk_allocator<UniformHandle> > { 
            struct UniformHandle {} *__first_; 
        } __end_cap_; 
    VGLContext *_context;
    VGLFragmentShader *_frag;
    } _handlesVector;
    VGLContext *_lastUsedContext;
    } _matrix;
    VGLResource *_resource;
    int _uMatrix;
    VGLVertexShader *_vert;
}

@property VGLContext * context;
@property union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } matrix;
@property(readonly) unsigned int token;

+ (id)fragName;
+ (id)programWithContext:(id)arg1;
+ (id)vertName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_attachBindLink;
- (id)_init;
- (void)bindAttributes;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dirtyUniformCaches;
- (id)init;
- (id)initWithResourceFactory:(id)arg1;
- (BOOL)link;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })matrix;
- (void)printInfoLog;
- (void)setContext:(id)arg1;
- (void)setMatrix:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;
- (void)setUniformColor:(int)arg1 curr:(struct _VGLColor { float x1; float x2; float x3; float x4; }*)arg2 next:(const struct _VGLColor { float x1; float x2; float x3; float x4; }*)arg3;
- (void)setUniformFloat:(int)arg1 curr:(float*)arg2 next:(float)arg3;
- (void)setUniformFloatVec:(int)arg1 curr:(float*)arg2 next:(const float*)arg3 count:(int)arg4;
- (void)setUniformInt:(int)arg1 curr:(int*)arg2 next:(int)arg3;
- (void)setUniformIntVec:(int)arg1 curr:(int*)arg2 next:(const int*)arg3 count:(int)arg4;
- (void)setUniformMat2:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; }*)arg3;
- (void)setUniformMat3:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; }*)arg3;
- (void)setUniformMat4:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; }*)arg3;
- (void)setUniformVec2:(int)arg1 curr:(struct Vec2Imp<float> { float x1; float x2; }*)arg2 next:(const struct Vec2Imp<float> { float x1; float x2; }*)arg3;
- (void)setUniformVec3:(int)arg1 curr:(struct { float x1; float x2; float x3; }*)arg2 next:(const struct { float x1; float x2; float x3; }*)arg3;
- (void)setUniformVec4:(int)arg1 curr:(struct { float x1; float x2; float x3; float x4; }*)arg2 next:(const struct { float x1; float x2; float x3; float x4; }*)arg3;
- (void)setup;
- (unsigned int)token;
- (int)uniformLocation:(const char *)arg1;
- (void)willBeUsedWithContext:(id)arg1;

@end