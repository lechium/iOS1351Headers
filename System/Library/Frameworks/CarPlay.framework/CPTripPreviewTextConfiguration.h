/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPTripPreviewTextConfiguration : NSObject <NSSecureCoding> {

	NSString* _startButtonTitle;
	NSString* _additionalRoutesButtonTitle;
	NSString* _overviewButtonTitle;

}

@property (nonatomic,copy,readonly) NSString * startButtonTitle;                         //@synthesize startButtonTitle=_startButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * additionalRoutesButtonTitle;              //@synthesize additionalRoutesButtonTitle=_additionalRoutesButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * overviewButtonTitle;                      //@synthesize overviewButtonTitle=_overviewButtonTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)startButtonTitle;
-(NSString *)additionalRoutesButtonTitle;
-(NSString *)overviewButtonTitle;
-(id)initWithStartButtonTitle:(id)arg1 additionalRoutesButtonTitle:(id)arg2 overviewButtonTitle:(id)arg3 ;
@end
