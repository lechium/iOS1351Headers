/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOperatingSystemVersionRange : NSObject {

	NSString* _family;
	SCD_Struct_WB5 _minimumVersion;
	SCD_Struct_WB5 _maximumVersion;

}

@property (nonatomic,readonly) NSString * family;                          //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB5 minimumVersion;              //@synthesize minimumVersion=_minimumVersion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB5 maximumVersion;              //@synthesize maximumVersion=_maximumVersion - In the implementation block
+(id)defaultCloudBookmarksEligibleOperatingSystemRanges;
-(NSString *)family;
-(SCD_Struct_WB5)minimumVersion;
-(BOOL)includesOperatingSystemVersion:(SCD_Struct_WB5)arg1 inFamily:(id)arg2 ;
-(id)initWithFamily:(id)arg1 minimumVersion:(SCD_Struct_WB5)arg2 maximumVersion:(SCD_Struct_WB5)arg3 ;
-(SCD_Struct_WB5)maximumVersion;
@end
