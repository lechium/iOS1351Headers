/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVBehaviorContext.h>

@class AVPlayerViewController, NSString;

@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext> {

	AVPlayerViewController* _playerViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
-(AVPlayerViewController *)playerViewController;
-(id)initWithAVKitOwner:(id)arg1 ;
@end
