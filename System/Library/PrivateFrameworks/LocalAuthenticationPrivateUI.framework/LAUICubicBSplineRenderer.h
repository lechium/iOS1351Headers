/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLCommandQueue, MTLBuffer, MTLTexture;
#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
@class LAUIRenderLoop, MTLRenderPassDescriptor;

@interface LAUICubicBSplineRenderer : NSObject {

	LAUIRenderLoop* _render_loop;
	unsigned long long _frame_index;
	renderer_shared_state _shared_render_state;
	id<MTLCommandQueue> _command_queue;
	MTLRenderPassDescriptor* _render_pass_descriptor;
	MTLRenderPassDescriptor* _clear_pass_descriptor;
	vector<(anonymous namespace)::buffer_group, std::__1::allocator<(anonymous namespace)::buffer_group> >* _ring_buffer;
	atomic<unsigned char> _ring_start;
	atomic<unsigned char> _ring_end;
	id<MTLBuffer> _tesselation_factors;
	unsigned long long _drawable_width;
	unsigned long long _drawable_height;
	id<MTLTexture> _multisample_texture;
	id<MTLTexture> _depth_stencil_texture;
	BOOL _textures_dirty;
	array<id<MTLTexture>, 2> _textures;
	unsigned long long _texture_index;
	vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> >* _control_points;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _control_point_indices;
	vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point> >* _cap_control_points;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _cap_control_point_indices;
	vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform> >* _spline_instance_uniforms;
	BOOL _caps_dirty;
	double _last_render_time;
	global_state_animator _global_state_animator;
	vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> >* _animation_targets;
	unsigned long long _current_animation_target_index;
	BOOL _reversed;
	BOOL _needs_update;
	animation_completion_handler_container _completion_container;
	vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline> >* _spline_state;
	vector<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> >, std::__1::allocator<std::__1::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance> > > >* _instance_state;
	unsigned long long _instance_count;
	BOOL _wireframe_enabled;
	double4x4 _model_transform;
	double4x4 _view_transform;
	double4x4 _projection_transform;

}

@property (assign,setter=setWireframeEnabled:,getter=isWireframeEnabled,nonatomic) BOOL wireframe_enabled;                          //@synthesize wireframe_enabled=_wireframe_enabled - In the implementation block
@property (assign,setter=setModelTransform:,getter=modelTransform,nonatomic) double4x4 model_transform;                             //@synthesize model_transform=_model_transform - In the implementation block
@property (assign,setter=setViewTransform:,getter=viewTransform,nonatomic) double4x4 view_transform;                                //@synthesize view_transform=_view_transform - In the implementation block
@property (assign,setter=setProjectionTransform:,getter=projectionTransform,nonatomic) double4x4 projection_transform;              //@synthesize projection_transform=_projection_transform - In the implementation block
+(renderer_shared_state)sharedStateForDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)releaseBuffers;
-(void)setViewTransform:(double4x4)arg1 ;
-(double4x4)viewTransform;
-(void)_updateState:(double)arg1 ;
-(BOOL)renderAtTime:(double)arg1 ;
-(double4x4)modelTransform;
-(void)setProjectionTransform:(double4x4)arg1 ;
-(double4x4)projectionTransform;
-(unsigned long long)addInstance:(const spline_instance*)arg1 ;
-(void)_updateCapForSpline:(unsigned long long)arg1 instance:(unsigned long long)arg2 ;
-(void)_updateTarget:(const global_state*)arg1 ;
-(void)updateRenderPassDescriptorWithDrawable:(id)arg1 ;
-(void)setSplineInstanceUniform:(instance_uniform)arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 forceCapRegeneration:(BOOL)arg4 ;
-(id)initWithRenderLoop:(id)arg1 sharedState:(const renderer_shared_state*)arg2 ;
-(unsigned long long)addSpline:(const spline*)arg1 ;
-(void)setAnimationTargets:(const vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state> >*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAnimationTargets:(const vector<LAUI_uniform_cubic_b_spline_renderer::spline_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_state> >*)arg1 forSpline:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setAnimationTargets:(const vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, std::__1::allocator<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state> >*)arg1 forSpline:(unsigned long long)arg2 instance:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(spline_instance_state*)animationTargetForSpline:(unsigned long long)arg1 instance:(unsigned long long)arg2 ;
-(void)updateLastRenderTime;
-(BOOL)isWireframeEnabled;
-(void)setWireframeEnabled:(BOOL)arg1 ;
-(void)setModelTransform:(double4x4)arg1 ;
@end

