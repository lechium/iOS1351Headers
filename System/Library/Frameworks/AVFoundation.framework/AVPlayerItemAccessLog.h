/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLogInternal* _playerItemAccessLog;

}

@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)initWithLogArray:(id)arg1 ;
-(id)_common_init;
-(id)_accessLogArray;
@end

