//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray;

@interface SCMapStatusBitmojiCarouselViewModel : SCComposerMarshallableObject
{
    NSArray *_bitmojiOptions;
    double _rows;
}

@property(nonatomic) double rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSArray *bitmojiOptions; // @synthesize bitmojiOptions=_bitmojiOptions;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithBitmojiOptions:(id)arg1 rows:(double)arg2;

@end
