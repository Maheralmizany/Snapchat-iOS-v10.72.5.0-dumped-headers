//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCOperaImageFetcher : NSObject
{
    CDUnknownBlockType _block;
    NSString *__id;
}

@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithId:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
