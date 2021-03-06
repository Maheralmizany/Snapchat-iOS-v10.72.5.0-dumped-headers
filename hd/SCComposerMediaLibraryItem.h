//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCComposerMediaLibraryItemId;

@interface SCComposerMediaLibraryItem : SCComposerMarshallableObject
{
    SCComposerMediaLibraryItemId *_itemId;
    double _width;
    double _height;
    double _durationMs;
    double _timestampMs;
}

@property(nonatomic) double timestampMs; // @synthesize timestampMs=_timestampMs;
@property(nonatomic) double durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) SCComposerMediaLibraryItemId *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithItemId:(id)arg1 width:(double)arg2 height:(double)arg3 durationMs:(double)arg4 timestampMs:(double)arg5;

@end

