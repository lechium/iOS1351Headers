/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookInteractor.h>
@class SXQuickLookFile;


@protocol SXQuickLookInteractor <NSObject>
@property (nonatomic,readonly) SXQuickLookFile * file; 
@required
-(SXQuickLookFile *)file;
-(void)loadThumbnailWithSize:(CGSize)arg1;

@end


@protocol SXQuickLookInteractorDelegate, SXQuickLookService;
@class SXQuickLookFile, NSString;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor> {

	id<SXQuickLookInteractorDelegate> delegate;
	SXQuickLookFile* _file;
	id<SXQuickLookService> _service;

}

@property (nonatomic,readonly) id<SXQuickLookService> service;                               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) id<SXQuickLookInteractorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXQuickLookFile * file;                                       //@synthesize file=_file - In the implementation block
-(id<SXQuickLookInteractorDelegate>)delegate;
-(void)setDelegate:(id<SXQuickLookInteractorDelegate>)arg1 ;
-(SXQuickLookFile *)file;
-(id<SXQuickLookService>)service;
-(void)loadThumbnailWithSize:(CGSize)arg1 ;
-(id)initWithFile:(id)arg1 service:(id)arg2 ;
@end

