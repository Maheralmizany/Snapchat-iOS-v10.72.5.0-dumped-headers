//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface SCStickerPickerDataSourceUpdateHint : NSObject
{
    NSIndexSet *_inserts;
    NSIndexSet *_updates;
    NSIndexSet *_deletes;
}

+ (id)updateHintFromMergingHints:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSIndexSet *deletes; // @synthesize deletes=_deletes;
@property(readonly, copy, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;
@property(readonly, copy, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
- (id)initWithInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3;

@end

