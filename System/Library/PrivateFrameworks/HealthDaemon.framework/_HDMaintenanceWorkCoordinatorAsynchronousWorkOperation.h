/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDMaintenanceOperation.h>

@interface _HDMaintenanceWorkCoordinatorAsynchronousWorkOperation : HDMaintenanceOperation {

	/*^block*/id _operationBlock;
	BOOL executing;
	BOOL finished;

}

@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)setExecuting:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 operationBlock:(/*^block*/id)arg2 ;
@end

