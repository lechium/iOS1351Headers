/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TSLocalDraftsDeviceManagerType.h>

@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType> {

	 listener;
	 delegate;

}

@property (assign,__weak,nonatomic) id<TSLocalDraftsDelegate> delegate; 
-(id)init;
-(id<TSLocalDraftsDelegate>)delegate;
-(void)setDelegate:(id<TSLocalDraftsDelegate>)arg1 ;
@end
