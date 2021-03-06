/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlayerMediaItemChangeReason.h>

@protocol IKJSPlayerMediaItemChangeReason <JSExport>
@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
@required
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;

@end


@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>

@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
-(id)init;
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;
@end

