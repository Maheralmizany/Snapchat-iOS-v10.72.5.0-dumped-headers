//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SCPreviewMagicMomentConfiguration : NSObject
{
    _Bool _isSavedCopy;
    NSNumber *_frameTime;
    NSNumber *_originalFrameTime;
    NSNumber *_operaTriedCount;
}

+ (id)configurationWithCache:(id)arg1 snap:(id)arg2 snapDetail:(id)arg3;
@property(copy, nonatomic) NSNumber *operaTriedCount; // @synthesize operaTriedCount=_operaTriedCount;
@property(nonatomic) _Bool isSavedCopy; // @synthesize isSavedCopy=_isSavedCopy;
@property(retain, nonatomic) NSNumber *originalFrameTime; // @synthesize originalFrameTime=_originalFrameTime;
@property(retain, nonatomic) NSNumber *frameTime; // @synthesize frameTime=_frameTime;
- (void).cxx_destruct;

@end

