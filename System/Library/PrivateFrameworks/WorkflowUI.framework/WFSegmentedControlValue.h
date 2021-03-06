/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface WFSegmentedControlValue : NSObject {

	NSString* _displayName;
	UIImage* _image;
	id _representedObject;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id representedObject;                //@synthesize representedObject=_representedObject - In the implementation block
+(id)valueWithDisplayName:(id)arg1 ;
+(id)valueWithDisplayName:(id)arg1 representedObject:(id)arg2 ;
+(id)valueWithImage:(id)arg1 ;
+(id)valueWithImage:(id)arg1 representedObject:(id)arg2 ;
-(NSString *)displayName;
-(UIImage *)image;
-(id)representedObject;
-(id)initWithDisplayName:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
@end

