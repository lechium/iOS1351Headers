/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PDPlaceholder : NSObject {

	int mType;
	int mOrientation;
	int mSize;
	unsigned mIndex;
	int mBoundsTrack;

}
+(BOOL)isTextType:(int)arg1 ;
+(BOOL)isNonTextType:(int)arg1 ;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)size;
-(unsigned)index;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end

