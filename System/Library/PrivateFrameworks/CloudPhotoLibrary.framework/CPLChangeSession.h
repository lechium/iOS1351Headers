/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSProgress, NSString, CPLLibraryManager;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {

	CPLPlatformObject* _platformObject;
	NSProgress* _sessionProgress;
	NSString* _sessionIdentifier;
	CPLLibraryManager* _libraryManager;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSProgress * sessionProgress;                    //@synthesize sessionProgress=_sessionProgress - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CPLLibraryManager * libraryManager;              //@synthesize libraryManager=_libraryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
+(id)shortDescription;
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)sessionIdentifier;
-(CPLPlatformObject *)platformObject;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSProgress *)sessionProgress;
-(CPLLibraryManager *)libraryManager;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithLibraryManager:(id)arg1 ;
-(id)createSessionContext;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

