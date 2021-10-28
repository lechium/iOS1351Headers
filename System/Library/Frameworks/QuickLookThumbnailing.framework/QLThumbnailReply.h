/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL;

@interface QLThumbnailReply : NSObject {

	/*^block*/id _drawingBlock;
	/*^block*/id _drawInContextBlock;
	/*^block*/id _ioSurfaceBlock;
	NSURL* _imageURL;
	unsigned long long _type;
	CGSize _contextSize;

}

@property (nonatomic,copy) id drawingBlock;                        //@synthesize drawingBlock=_drawingBlock - In the implementation block
@property (nonatomic,copy) id drawInContextBlock;                  //@synthesize drawInContextBlock=_drawInContextBlock - In the implementation block
@property (nonatomic,copy) id ioSurfaceBlock;                      //@synthesize ioSurfaceBlock=_ioSurfaceBlock - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                     //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) CGSize contextSize;                   //@synthesize contextSize=_contextSize - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)replyWithContextSize:(CGSize)arg1 drawingBlock:(/*^block*/id)arg2 ;
+(id)replyWithContextSize:(CGSize)arg1 currentContextDrawingBlock:(/*^block*/id)arg2 ;
+(id)replyWithImageFileURL:(id)arg1 ;
+(id)replyWithContextSize:(CGSize)arg1 ioSurfaceBlock:(/*^block*/id)arg2 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(CGSize)contextSize;
-(id)drawInContextBlock;
-(id)drawingBlock;
-(id)ioSurfaceBlock;
-(void)setDrawInContextBlock:(id)arg1 ;
-(void)setContextSize:(CGSize)arg1 ;
-(void)setDrawingBlock:(id)arg1 ;
-(void)setIoSurfaceBlock:(id)arg1 ;
@end
