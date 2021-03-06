/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, NSData;

@interface STVersionVector : NSObject <NSCopying> {

	NSMutableDictionary* _nodeByIdentifier;
	NSString* _editorIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * nodeByIdentifier;              //@synthesize nodeByIdentifier=_nodeByIdentifier - In the implementation block
@property (nonatomic,copy) NSString * editorIdentifier;                           //@synthesize editorIdentifier=_editorIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSArray *)nodes;
-(id)initWithNode:(id)arg1 ;
-(void)join:(id)arg1 ;
-(unsigned long long)evaluateCausality:(id)arg1 ;
-(void)setEditorIdentifier:(NSString *)arg1 ;
-(NSString *)editorIdentifier;
-(NSMutableDictionary *)nodeByIdentifier;
-(void)incrementNodeWithIdentifier:(id)arg1 ;
-(BOOL)precedesVersionVector:(id)arg1 ;
-(BOOL)isConcurrentWithVersionVector:(id)arg1 ;
-(BOOL)isEqualToVersionVector:(id)arg1 ;
-(void)setNodeByIdentifier:(NSMutableDictionary *)arg1 ;
@end

