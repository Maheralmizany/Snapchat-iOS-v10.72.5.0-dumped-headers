//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCV3Logger.h"

@interface TCV3LoggerCppProxy : NSObject <TCV3Logger>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::Logger>, std::__1::shared_ptr<talkcorev3::Logger>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)log:(id)arg1 message:(id)arg2;
- (id)initWithCpp:(const shared_ptr_c04af217 *)arg1;

@end
