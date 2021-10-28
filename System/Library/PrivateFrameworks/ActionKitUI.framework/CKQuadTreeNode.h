/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKitUI/ActionKitUI-Structs.h>
@class NSMutableDictionary, NSValue, NSArray;

@interface CKQuadTreeNode : NSObject {

	CKQuadTreeNode* _topRight;
	CKQuadTreeNode* _topLeft;
	CKQuadTreeNode* _bottomLeft;
	CKQuadTreeNode* _bottomRight;
	NSMutableDictionary* _userInfo;
	NSValue* _point;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                        //@synthesize bounds=_bounds - In the implementation block
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy,readonly) NSArray * nodes; 
@property (nonatomic,retain) NSValue * point;                        //@synthesize point=_point - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(CGRect)bounds;
-(NSValue *)point;
-(void)setPoint:(NSValue *)arg1 ;
-(NSArray *)nodes;
-(BOOL)isLeaf;
-(id)initWithBounds:(CGRect)arg1 ;
-(id)debugDescriptionWithLevel:(long long)arg1 ;
-(id)nodeForPoint:(CGPoint)arg1 ;
-(void)insertPoint:(CGPoint)arg1 ;
-(void)visit:(/*^block*/id)arg1 ;
@end
