/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CALayer, NSSet;

@interface HUCAPackageLayer : NSObject {

	NSString* _name;
	CALayer* _layer;
	NSSet* _tags;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSSet * tags;                 //@synthesize tags=_tags - In the implementation block
+(id)_allTags;
+(id)_tagsForName:(id)arg1 ;
-(NSString *)name;
-(NSSet *)tags;
-(CALayer *)layer;
-(void)_applyPrimaryColorWithModifiers:(id)arg1 ;
-(id)initWithName:(id)arg1 layer:(id)arg2 ;
-(void)applyModifiers:(id)arg1 ;
@end
