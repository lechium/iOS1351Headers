/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSProgress;

@interface FPCoordinationContext : NSObject {

	NSProgress* _progress;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSProgress *)progress;
-(id)completionHandler;
-(id)initWithProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

