//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface IGListMoveIndexPath : NSObject
{
    NSIndexPath *_from;
    NSIndexPath *_to;
}

@property(readonly, nonatomic) NSIndexPath *to; // @synthesize to=_to;
@property(readonly, nonatomic) NSIndexPath *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFrom:(id)arg1 to:(id)arg2;

@end

