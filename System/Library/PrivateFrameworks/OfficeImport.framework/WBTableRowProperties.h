/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRowProperties : NSObject
+(void)readFrom:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 properties:(id)arg4 ;
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 ;
+(void)write:(id)arg1 properties:(id)arg2 wrdProperties:(WrdTableProperties*)arg3 tracked:(WrdTableProperties*)arg4 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 ;
@end

