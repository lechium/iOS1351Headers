/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ML3DatabaseValidationDelegate;
@class ML3MusicLibrary;

@interface ML3DatabaseValidation : NSObject {

	BOOL _truncateBeforeValidating;
	ML3MusicLibrary* _library;
	id<ML3DatabaseValidationDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                                    //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL truncateBeforeValidating;                                  //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
-(id<ML3DatabaseValidationDelegate>)delegate;
-(void)setDelegate:(id<ML3DatabaseValidationDelegate>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(ML3MusicLibrary *)library;
-(BOOL)truncateBeforeValidating;
-(BOOL)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
-(BOOL)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runValidation;
-(void)setTruncateBeforeValidating:(BOOL)arg1 ;
@end

