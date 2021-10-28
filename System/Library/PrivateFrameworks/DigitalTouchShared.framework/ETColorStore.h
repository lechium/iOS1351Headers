/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface ETColorStore : NSObject {

	NSMutableArray* _colors;
	unsigned long long _selectedColorIndex;
	BOOL _selectedIndexLoaded;

}

@property (assign,nonatomic) unsigned long long selectedColorIndex; 
@property (nonatomic,readonly) NSArray * colors; 
+(id)defaultStore;
-(id)init;
-(void)dealloc;
-(id)_colors;
-(NSArray *)colors;
-(unsigned long long)selectedColorIndex;
-(void)setSelectedColorIndex:(unsigned long long)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)addDefaultsObserver;
@end
