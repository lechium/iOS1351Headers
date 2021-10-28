/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

@interface _UIImageStackImageAsset : UIImageAsset {

	CUICatalog* _catalog;
	NSData* _stackData;

}

@property (nonatomic,retain) CUICatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,copy) NSData * stackData;                  //@synthesize stackData=_stackData - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(NSData *)stackData;
-(CUICatalog *)catalog;
-(void)setCatalog:(CUICatalog *)arg1 ;
@end
