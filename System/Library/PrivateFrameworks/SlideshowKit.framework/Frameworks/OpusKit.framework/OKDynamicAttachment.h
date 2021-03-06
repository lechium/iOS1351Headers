/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, UIAttachmentBehavior;

@interface OKDynamicAttachment : NSObject <OKSettingsSupport> {

	UIOffset _localOffsetFromCenter;
	NSString* _remoteWidgetName;
	SCD_Union_OK10 _remote;
	double _length;
	double _damping;
	double _frequency;
	struct {
		unsigned needsUpdate : 1;
		unsigned hasLength : 1;
		unsigned hasDamping : 1;
		unsigned hasFrequency : 1;
	}  _flags;
	UIAttachmentBehavior* _behavior;

}

@property (readonly) UIAttachmentBehavior * behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(UIAttachmentBehavior *)behavior;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)updateForOwningDynamicProxy:(id)arg1 ;
@end

