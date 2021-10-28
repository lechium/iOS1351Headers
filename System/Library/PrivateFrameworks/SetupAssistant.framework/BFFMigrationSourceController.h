/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject {

	/*^block*/id _dismissHandler;
	BYMigrationSourceController* _sourceController;

}

@property (nonatomic,retain) BYMigrationSourceController * sourceController;              //@synthesize sourceController=_sourceController - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                             //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)setSourceController:(BYMigrationSourceController *)arg1 ;
-(BYMigrationSourceController *)sourceController;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(void)setFileTransferSession:(id)arg1 ;
-(id)initWithFileTransferSession:(id)arg1 ;
-(id)initialViewController;
@end
