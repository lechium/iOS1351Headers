/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@class NSString, MPAVRoute, UIImage;

@interface MPAVRoutingViewItem : NSObject <_MPStateDumpPropertyListTransformable> {

	BOOL _enabled;
	NSString* _localizedTitle;
	long long _type;
	MPAVRoute* _route;
	NSString* _localizedSubtitle;
	UIImage* _image;
	NSString* _actionIdentifier;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) MPAVRoute * route;                              //@synthesize route=_route - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedSubtitle;              //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;               //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithRoute:(id)arg1 ;
+(id)itemWithActionTitle:(id)arg1 subtitle:(id)arg2 enabled:(BOOL)arg3 identifier:(id)arg4 image:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(BOOL)enabled;
-(UIImage *)image;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSString *)actionIdentifier;
-(MPAVRoute *)route;
-(id)_stateDumpObject;
@end

