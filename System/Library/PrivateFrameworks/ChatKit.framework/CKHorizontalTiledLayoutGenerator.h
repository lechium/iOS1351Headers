/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator {

	CGPoint _origin;
	double _referenceHeight;

}

@property (assign,nonatomic) double referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)setReferenceHeight:(double)arg1 ;
-(void)willParseTiles;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_CK11*)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_CK11*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_CK11*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_CK11*)arg1 count:(long long)arg2 ;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(double)referenceHeight;
-(BOOL)_addColumnWithTiles:(SCD_Struct_CK11*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_addColumnWithContiguousTiles:(SCD_Struct_CK11*)arg1 count:(long long)arg2 ;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceColumn:(SCD_Struct_CK11*)arg1 count:(long long*)arg2 ;
-(BOOL)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(SCD_Struct_CK11*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
@end

