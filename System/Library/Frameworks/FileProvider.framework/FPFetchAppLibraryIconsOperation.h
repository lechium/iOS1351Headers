/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@protocol FPOperationProgressDelegate;
@class NSDictionary;

@interface FPFetchAppLibraryIconsOperation : FPOperation <FPOperationClient> {

	NSDictionary* _itemIdentifierByAppBundleID;
	CGSize _desiredSize;
	double _screenScale;
	id<FPOperationProgressDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FPOperationProgressDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FPOperationProgressDelegate>)delegate;
-(void)setDelegate:(id<FPOperationProgressDelegate>)arg1 ;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAppLibraryItems:(id)arg1 desiredSize:(CGSize)arg2 screenScale:(double)arg3 ;
@end
