//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (PDSQLWhereClause)
- (_Bool)getRightKeyPath:(id *)arg1 orRightContstantValue:(id *)arg2 error:(id *)arg3;	// IMP=0x000000010008df68
- (id)leftKeyPath:(id *)arg1;	// IMP=0x000000010008deb4
- (_Bool)pd_containsKeyPath:(id)arg1;	// IMP=0x0000000100091c8c
- (id)pd_filterSubpredicatesForKeyPath:(id)arg1;	// IMP=0x0000000100091a68
- (void)_populateKeypathValueMap:(id)arg1;	// IMP=0x000000010009195c
@end
