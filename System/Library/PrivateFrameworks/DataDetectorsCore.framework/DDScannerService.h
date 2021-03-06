/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerService : NSObject
+(id)scanString:(id)arg1 ;
+(long long)scanString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)cancelJob:(long long)arg1 ;
+(id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 ;
+(void)appendWatchOSLinksToString:(id)arg1 ;
+(id)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 ;
+(long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(long long)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

