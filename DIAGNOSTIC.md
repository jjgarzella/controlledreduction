
* most of the hard work is done in `hypersurface/frob_J_ZZ.cc`,
  so look there for most of the print statements
* for printing the T matrix, see `dr/get_final_reduction_matrix_J.cc`
* for printing out reduciton matrices, see `reduce_vector_J_poly_ZZ.cc`
  and `reduce_vector_J_ZZ.cc`.

Note for larger examples, the output can be very large, to the point of exceeding
your terminal's history. If you're particularly interested in a certain
thing, I recommend placing an assert(false) right after you print it.
