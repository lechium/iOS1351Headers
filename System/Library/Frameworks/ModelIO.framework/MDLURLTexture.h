/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/MDLTexture.h>

@class NSURL;

@interface MDLURLTexture : MDLTexture {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * URL; 
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
@end

