/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWScript.h>

@protocol SWSession;
@class SWDatastore, NSString, WKUserScript;

@interface SWDatastoreUpdateScript : NSObject <SWScript> {

	SWDatastore* _datastore;
	SWDatastore* _oldDatastore;
	id<SWSession> _originatingSession;

}

@property (nonatomic,readonly) SWDatastore * datastore;                       //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) SWDatastore * oldDatastore;                    //@synthesize oldDatastore=_oldDatastore - In the implementation block
@property (nonatomic,readonly) id<SWSession> originatingSession;              //@synthesize originatingSession=_originatingSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
+(id)source;
-(NSString *)identifier;
-(SWDatastore *)datastore;
-(NSString *)executableScript;
-(BOOL)queueable;
-(SWDatastore *)oldDatastore;
-(id<SWSession>)originatingSession;
-(id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3 ;
@end

