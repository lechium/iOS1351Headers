/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {

	Ai _notificationIteration;
	NSString* _assertionLabel;
	NSString* _label;
	long long _notificationStalenessInterval;
	/*^block*/id _notificationHandlerBlock;

}

@property (nonatomic,retain) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long notificationStalenessInterval;              //@synthesize notificationStalenessInterval=_notificationStalenessInterval - In the implementation block
@property (nonatomic,copy) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setNotificationStalenessInterval:(long long)arg1 ;
-(void)setNotificationHandlerBlock:(id)arg1 ;
-(void)noteRecievedNotification:(id)arg1 ;
-(long long)notificationStalenessInterval;
-(id)notificationHandlerBlock;
@end

