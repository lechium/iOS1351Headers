/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWDatastoreFactory.h>

@protocol SWDatastoreFactory <NSObject>
@required
-(id)createDatastoreFromMessage:(id)arg1;

@end


@protocol SWLogger;
@class NSString;

@interface SWDatastoreFactory : NSObject <SWDatastoreFactory> {

	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWLogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(id)createDatastoreFromMessage:(id)arg1 ;
@end

