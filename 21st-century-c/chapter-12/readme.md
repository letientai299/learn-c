- If you have a loop nested inside another loop, it is typically better to
  parallelize the outer loop rather than the inner loop.
- Struct can be atomic but only for whole struct updating. Struct field
  accessing is not atomic.
