//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SCAstLowIRRegister : NSObject
{
    NSString *_registerDescription;
    NSMutableArray *_IRsForResults;
    NSMutableArray *_IRsForVariables;
    long long _nameAfterRenaming;
    long long _index;
}

+ (id)null;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long nameAfterRenaming; // @synthesize nameAfterRenaming=_nameAfterRenaming;
@property(readonly, nonatomic) NSMutableArray *IRsForVariables; // @synthesize IRsForVariables=_IRsForVariables;
@property(readonly, nonatomic) NSMutableArray *IRsForResults; // @synthesize IRsForResults=_IRsForResults;
- (void).cxx_destruct;
- (void)removeIRsForVariables:(id)arg1;
- (void)registerIRForVariable:(id)arg1;
- (void)registerIRForResult:(id)arg1;
- (id)registerDescription;
- (id)initWithDescription:(id)arg1;

@end

