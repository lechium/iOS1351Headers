/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {

	NSString* mFullPath;
	double mInfoPlistModDate;
	double mRsrcModDate;
	AudioComponentVector* mBundleComponentVector;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(void)scanWithPriority:(int)arg1 loadable:(BOOL)arg2 infoPlistPath:(id)arg3 ;
@end
