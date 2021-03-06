/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKitUI/ActionKitUI-Structs.h>
@class CADisplayLink, NSMutableSet, NSMapTable, CAShapeLayer, UIView, NSSet, UIColor;

@interface CKForceLayoutAnimator : NSObject {

	CADisplayLink* _displayLink;
	NSMutableSet* _nodes;
	NSMutableSet* _links;
	NSMapTable* _weights;
	NSMapTable* _previousCenters;
	NSMapTable* _fixedNodes;
	CAShapeLayer* _linesLayer;
	UIView* _referenceView;
	double _linkDistance;
	double _linkStrength;
	double _friction;
	double _charge;
	double _chargeDistance;
	double _theta;
	double _gravity;
	double _alpha;

}

@property (nonatomic,readonly) UIView * referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,readonly) NSSet * nodes;                       //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSSet * links;                       //@synthesize links=_links - In the implementation block
@property (assign,nonatomic) double linkDistance;                   //@synthesize linkDistance=_linkDistance - In the implementation block
@property (assign,nonatomic) double linkStrength;                   //@synthesize linkStrength=_linkStrength - In the implementation block
@property (assign,nonatomic) double friction;                       //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double charge;                         //@synthesize charge=_charge - In the implementation block
@property (assign,nonatomic) double chargeDistance;                 //@synthesize chargeDistance=_chargeDistance - In the implementation block
@property (assign,nonatomic) double theta;                          //@synthesize theta=_theta - In the implementation block
@property (assign,nonatomic) double gravity;                        //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double alpha;                          //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,copy) UIColor * lineColor; 
@property (assign,nonatomic) double lineWidth; 
-(id)init;
-(void)stop;
-(double)gravity;
-(void)start;
-(double)alpha;
-(void)addNode:(id)arg1 ;
-(NSSet *)nodes;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setAlpha:(double)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(void)setCharge:(double)arg1 ;
-(id)initWithReferenceView:(id)arg1 ;
-(UIView *)referenceView;
-(double)charge;
-(void)setGravity:(double)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(NSSet *)links;
-(void)removeAllNodes;
-(void)tick;
-(double)theta;
-(void)setTheta:(double)arg1 ;
-(void)linkNode:(id)arg1 toNode:(id)arg2 ;
-(void)unlinkNode:(id)arg1 fromNode:(id)arg2 ;
-(void)fixNode:(id)arg1 atPosition:(CGPoint)arg2 ;
-(void)releaseNode:(id)arg1 ;
-(double)linkDistance;
-(void)setLinkDistance:(double)arg1 ;
-(double)linkStrength;
-(void)setLinkStrength:(double)arg1 ;
-(double)chargeDistance;
-(void)setChargeDistance:(double)arg1 ;
@end

