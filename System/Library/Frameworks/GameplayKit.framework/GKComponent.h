/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKEntity, GKComponentSystem, NSString;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding> {

	GKEntity* _entity;
	int _usesPerComponentUpdateCount;
	GKComponentSystem* _componentSystem;
	NSString* _componentName;

}

@property (assign,nonatomic) BOOL usesPerComponentUpdate; 
@property (assign,nonatomic) GKComponentSystem * componentSystem; 
@property (assign,nonatomic) NSString * componentName; 
@property (nonatomic,__weak,readonly) GKEntity * entity; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setEntity:(GKEntity *)arg1 ;
-(GKEntity *)entity;
-(NSString *)componentName;
-(void)setComponentName:(NSString *)arg1 ;
-(GKComponentSystem *)componentSystem;
-(BOOL)usesPerComponentUpdate;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)didAddToEntity;
-(void)willRemoveFromEntity;
-(void)setUsesPerComponentUpdate:(BOOL)arg1 ;
-(void)setComponentSystem:(GKComponentSystem *)arg1 ;
@end
