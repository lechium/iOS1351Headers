/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PptMetaCharacterBlock : NSObject {

	int mType;
	int mPosition;
	int mExtraData;

}
-(int)type;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(int)extraData;
-(id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3 ;
-(id)initWithType:(int)arg1 position:(int)arg2 ;
@end

